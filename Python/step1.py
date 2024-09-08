import requests
r1 = requests.get('http://localhost:3272/step1', headers={"craftsmen-api-key": "UGxlYXNlRG9uJ3RDaGFuZ2VUaGlzVmFsdWU=",
                                                          "email": "zaber05@gmail.com"})
data1 = r1.json()

print(data1)

p = data1.get('problem')
