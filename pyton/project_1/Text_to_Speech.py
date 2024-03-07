from gtts import gTTS

text=input("Enter the test : ")
langu='en'
sound= gTTS(text=text,lang=langu,slow=False)
sound.save("Output.mp3")