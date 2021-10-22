import pyshorteners

link=input("enter the link : ")
s = pyshorteners.Shortener()
x= s.tinyurl.short(link)
print(x)
