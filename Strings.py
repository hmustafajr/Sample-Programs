% python
string1 = 'Hassan'
string2 = 'Mufasa'
string1 + string2
string1 + "kW Cowboy" + string2
string3 = string1 + string2 + "kW Cowboy"
string3
string3 [2:10] # string 3 from index 2 (0-based) to 10
string3 [0]
len(string3)
string3 [14:] # string3 from index 14 (0-based) to end
string3[-5] #start 5 from the end and print the rest
string3.find ('kW Cowboy') # index (0-based) where string starts
string3.find ('Miles Morales') # returns -1 if not found
string3.replace('Mufasa','Miles Morales') # replaces Mufasa w/ Miles Morales
print 'AAAAAAAAAA' # Prints 10 A's the hard way
print 'A'*10 # 10 A's the easy way