import telebot
import mushroomToken
import random

from telebot import types
import COVID19Py

covid19 = COVID19Py.COVID19()
bot = telebot.TeleBot(mushroomToken.TOKEN)


@bot.message_handler(commands=['start'])
def depressed(message):
	#keyboard
	markup = types.ReplyKeyboardMarkup(resize_keyboard=True, row_width = 4)
	item1 = types.KeyboardButton("Весь мир")
	item2 = types.KeyboardButton("США")
	item3 = types.KeyboardButton("Украина")
	item4 = types.KeyboardButton("Россия")

	markup.add(item1, item2, item3, item4)
	bot.send_message(message.chat.id, "Приветик 🍄, {0.first_name}!\nЯ - <b>{1.first_name}</b>, и я помогу тебе узнать инфу по COVID-19🍄".format(message.from_user, bot.get_me()),
		parse_mode='html', reply_markup = markup)
	sti = open('static/allfine.webp', 'rb')
	bot.send_sticker(message.chat.id, sti)

	bot.send_message(message.chat.id, "В какой стране сегодня помониторим?")



@bot.message_handler(content_types=['text'])
def mess(message):
	final_message = ""
	get_message_bot = message.text.strip().lower()
	if message.chat.type == 'private':
		if get_message_bot == "сша":
			location = covid19.getLocationByCountryCode("US")
		elif get_message_bot == "украина":
			location = covid19.getLocationByCountryCode("UA")
		elif get_message_bot == "россия":
			location = covid19.getLocationByCountryCode("RU")
		else:
			location = covid19.getLatest()
			final_message = f"<u>Данные по всему миру:</u>\n<b>Заболевшие: </b>{location['confirmed']}\n"


	if final_message == "":
		final_message = f"<u>Данные по стране:</u>\nНаселение: {location[0]['country_population']}\n"\
						f"\nПоследние данные: \n"\
						f"Заболевших: <b>{location[0]['latest']['confirmed']} </b>\n"\
						f"Смертей: <b>{location[0]['latest']['deaths']} </b>\n"\

	bot.send_message(message.chat.id, final_message, parse_mode = 'html')


# RUN
bot.polling(none_stop=True)