#Given 2 int values, return True if one is negative and one is positive. 
#Except if the parameter "negative" is True, then return True only if both are negative.

def pos_neg(a, b, negative):
  if a  >= 0 and b < 0 and not negative:
    return True
  elif b  >= 0 and a < 0 and not negative:
    return True
  elif a  < 0 and b < 0 and negative:
    return True
  else:
    return False
