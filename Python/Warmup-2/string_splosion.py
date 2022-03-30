#Given a non-empty string like "Code" return a string like "CCoCodCode".

def string_splosion(str):
  tempStr = ""
  for i in range(len(str)):
    tempStr+= str[:i-len(str)]
  return tempStr + str
