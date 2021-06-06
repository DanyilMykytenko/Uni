import telebot
import config
import random

from telebot import types

bot = telebot.TeleBot(config.TOKEN)

@bot.message_handler(commands=['start'])
def depressed(message):
	sti = open('static/bloodTrail.webp', 'rb')

	#keyboard
	markup = types.ReplyKeyboardMarkup(resize_keyboard=True)
	item1 = types.KeyboardButton("☑Сколько баллов поставить в зачёт?")
	item2 = types.KeyboardButton("☻ Как дела?")

	markup.add(item1, item2)

	bot.send_message(message.chat.id, "Здарова, карта, {0.first_name}!\nЯ - <b>{1.first_name}</b>, СтэсоБот, хочу получить 100 баллов и жмурика".format(message.from_user, bot.get_me()),
		parse_mode='html', reply_markup=markup)
	bot.send_sticker(message.chat.id, sti)


@bot.message_handler(content_types=['text'])
def lalala(message):
	if message.chat.type == 'private':
		if message.text == '☑Сколько баллов поставить в зачёт?':
			bot.send_message(message.chat.id, str('Определённо 100, я ультра-слабый!'))
		elif message.text == "☻ Как дела?":

			markup = types.InlineKeyboardMarkup(row_width=2)
			item1 = types.InlineKeyboardButton('Хорошо!', callback_data = 'good')
			item2 = types.InlineKeyboardButton('Я ультра-слабый', callback_data = 'bad')

			markup.add(item1, item2)

			bot.send_message(message.chat.id, 'Отлично, но я ультра-слабый! А ты?', reply_markup = markup)
		else:
			bot.send_message(message.chat.id, 'Я тебя не понимаю ☹')

@bot.callback_query_handler(func=lambda call: True)
def callback_inline(call):
	try:
		if call.message:
			if call.data == 'good':
				bot.send_message(call.message.chat.id, 'Поздравляю 7️⃣7️⃣7️⃣!!!')
			elif call.data == 'bad':
				bot.send_message(call.message.chat.id, 'Тазашо 😥')

			bot.edit_message_text(chat_id=call.message.chat.id, message_id=call.message.message_id, text="Отлично, но я ультра-слабый! А ты?",
                reply_markup=None)

	except Exception as e:
        	print(repr(e))
# RUN
bot.polling(none_stop=True)