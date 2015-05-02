#! /usr/bin/python

from sys import argv

def encode(string): 
  print "encoding %s ...\n" %string
  output = ''
  s = list(string)
  for c in s:
    ## If a vowel
    if (c.lower() == 'a' or c.lower() == 'e' or c.lower() == 'i' or c.lower() == 'o' or c.lower() == 'u' or c.lower() == ' ' or c.lower() == "'" or c.lower() == '?' or c.lower() == '!' ):
      output = output + c
    else:
      output = output + c + 'o' + c 
  print output

def decode(string):
  print "decoding %s ...\n" %string
  s = list(string)
  i = 0
  output = ''
  while (i != len(string)):
    ## If a vowel
    if (s[i].lower() == 'a' or s[i].lower() == 'e' or s[i].lower() == 'i' or s[i].lower() == 'o' or s[i].lower() == 'u' or s[i].lower() == ' ' or s[i].lower() == "'" or s[i].lower() == '?' or s[i].lower() == '!' ):
      output = output + s[i]
      i = i + 1
    else:
      output= output + s[i]
      i = i + 3
  print output



## Main function
script, code, flag = argv

if (flag == "encode" or flag == "e"):
  encode(code)
elif (flag == "decode" or flag == "d"):
  decode(code)
else:
  print "Unknown inputs, exiting program \n"
