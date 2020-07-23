word1,word2=map(str,input().split())
word1=sorted(word1)
word2=sorted(word2)
if(word1==word2):
    print("YES")
else:
    print("NO")
