from gtts import gTTS
import os

mytext=input("Enter : ")
language = 'en'

myobj = gTTS(text=mytext , lang=language,slow=False)
myobj.save("vo.mp3")
os.system("mpg321 vo.mp3")