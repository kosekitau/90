n = int(input())

st = set()
ans = []

for i in range(n):
    s = input() 
    if s in st:
        continue
    st.add(s)
    ans.append(i)

for x in ans:
    print(x+1)