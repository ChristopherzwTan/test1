#!/usr/bin/python

from sys import argv

script, a, b = argv

def intHarmony(index1, index2):

  comp = 0
  bin1 = '{0:032b}'.format(int(index1))
  bin2 = '{0:032b}'.format(int(index2))

  print "\n"
  #print bin1
  #print bin2

  stringbin1 = list(bin1)
  stringbin2 = list(bin2)
  oppositebin1 = ''
  oppositebin2 = ''

  for index in range (0,32):
    if (stringbin1[index] == stringbin2[index]):
      comp = comp + 1
    if (stringbin1[index] == '1'):
      oppositebin1 = oppositebin1 + '0'
    else:
      oppositebin1 = oppositebin1 + '1'
    if (stringbin2[index] == '1'):
      oppositebin2 = oppositebin2 + '0'
    else:
      oppositebin2 = oppositebin2 + '1'

  #print oppositebin1
  #print oppositebin2

  #print int(oppositebin1, 2)
  #print int(oppositebin2, 2)

  comp = comp*100/32

  #print "compatibility: %i \n" %(comp)
  print "%i%% of compatibility" %(comp)
  print "%i should avoid %i" %(int(index1),int(oppositebin1,2))
  print "%i should avoid %i" %(int(index2),int(oppositebin2,2))
  return comp


intHarmony(a, b)
