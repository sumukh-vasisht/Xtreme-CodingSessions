def replacingConsonants(s): 
  
    nVowel = "aaaeeeeiiiiioooooouuuuuuuu"
      
    for i in range (0, len(s)): 
        s = s.replace(s[i], nVowel[ord(s[i]) - 97]) 
      
    return s 
  
s = input()"; 
  
print(replacingConsonants(s)); 