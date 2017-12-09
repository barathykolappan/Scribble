Dim A
Set A=CreateObject("SAPI.SpVoice")
A.Rate=-1
A.Volume=100
A.Speak("Beautiful")
A.Rate=0
A.Speak("What shall we proceed with ")