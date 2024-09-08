def rec(s, i):
    global left
    global right
    if(i < 0):
        return
    else:
        if(s[i] == '<'):
            left = left+1
            return rec(s, i-1)
        elif(s[i] == '>'):
            right = right+1
            return rec(s, i-1)


s = "<<<<>>>>>>"
left = 0
right = 0
i = len(s)

rec(s, i-1)

print(left, " ", right)
