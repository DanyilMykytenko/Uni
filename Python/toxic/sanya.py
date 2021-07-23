import requests
import telebot
from datetime import datetime

TOKEN = '1618227350:AAGYC-BYNEuOF329HNk-tcpcAxCkC6yOi-Q'
bot = telebot.TeleBot(TOKEN)
# send request to API for forecast
url = f"https://api.openweathermap.org/data/2.5/forecast?id=2964574&" \
      f"APPID=7aa5b205eb58a36623c2166fd30d17ac&mode=json&units=metric"

data = requests.get(url).json()
print(data)

weather_message = "Morning Alex,\n\nHere is today's forecast:\n"

for forecast in data['list'][0:5]:
    time_as_dt = datetime.strptime(forecast['dt_txt'], '%Y-%m-%d %H:%M:%S')

    weather_message += (f"\nTime: {time_as_dt.strftime('%H:%M:%S')}\n"
                        f"Description: {forecast['weather'][0]['description'].title()}\n"
                        f"Temperature: {int(forecast['main']['temp'])}\n"
                        f"Feels like: {int(forecast['main']['feels_like'])}\n"
                        f"Wind speed: {int(forecast['wind']['speed'] * 3.6)}Kph\n")  # <- convert to Kph


@bot.message_handler(commands=['start'])  # реакція чат бота на стартову команду
def start_message(message):
    bot.send_message(message.chat.id, weather_message)


bot.polling()
