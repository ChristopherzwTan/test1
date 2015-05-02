#! /usr/bin/python

from sys import argv

def encode(string): 
  print "encoding %s ..." %string

def decode(string):
  print "decoding %s ..." %string


#def main(argv):
script, code, flag = argv

if (flag == "encode" or flag == "e"):
  encode(code)
elif (flag == "decode" or flag == "d"):
  decode(code)
else:
  print "Unknown inputs, exiting program"
