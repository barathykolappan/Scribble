Dim A
Set A=CreateObject("SAPI.SpVoice")
A.Rate=0
A.Volume=50
A.Speak("Saving")
A.Volume=100
A.Speak("Done")
