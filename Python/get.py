import requests
r1 = requests.get('http://localhost:3272/step1', headers={"craftsmen-api-key": "UGxlYXNlRG9uJ3RDaGFuZ2VUaGlzVmFsdWU=",
                                                          "email": "zaber05@gmail.com"})
data1 = r1.json()
print(data1)

p = data1.get('problem')


def maxDepth(p):

    count = 0
    stack = []

    for i in range(len(p)):
        if (p[i] == '<'):
            stack.append(i)
        elif (p[i] == '>'):
            if (count < len(stack)):
                count = len(stack)

            stack.pop()

    return count


ans1 = maxDepth(p)/2

print(ans1)


value1 = {
    "depth": ans1,
}
r2 = requests.post("http://localhost:3272/step1",  headers={"craftsmen-api-key": "UGxlYXNlRG9uJ3RDaGFuZ2VUaGlzVmFsdWU=",
                                                            "email": "zaber05@gmail.com"}, json=value1)
data2 = r2.json()

print(data2)


def rec(p, i):
    global left
    global right
    if(i < 0):
        return
    else:
        if(p[i] == '<'):
            left = left+1
            return rec(p, i-1)
        elif(p[i] == '>'):
            right = right+1
            return rec(p, i-1)


left = 0
right = 0
i = len(p)

rec(p, i-1)

value2 = {"left": left,
          "right": right
          }
r3 = requests.post("http://localhost:3272/step1",  headers={"craftsmen-api-key": "UGxlYXNlRG9uJ3RDaGFuZ2VUaGlzVmFsdWU=",
                                                            "email": "zaber05@gmail.com"}, json=value2)
data3 = r3.json()

print(data3)

# Ran out of time
