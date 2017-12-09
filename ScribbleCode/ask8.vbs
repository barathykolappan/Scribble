Dim A
Set A=CreateObject("SAPI.SpVoice")
A.Rate=-1
A.Volume=100
A.Speak("Thanks!")
A.Rate=2
A.Speak("Will See to it.")