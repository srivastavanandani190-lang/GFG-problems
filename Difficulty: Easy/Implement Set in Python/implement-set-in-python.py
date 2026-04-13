st = {int(x) for x in input().split()}
i = int(input())
r = int(input())

########### Write your code below ###############
# Insert i in set
st.add(i)
########### Write your code above ###############

# Printing the set
for i in sorted(st):
    print(i, end=' ')
print()

########### Write your code below ###############
# Remove r from set
st.discard(r)   # safer than remove (no error if not present)
########### Write your code above ###############

# Printing the set
for i in sorted(st):
    print(i, end=' ')
print()

########### Write your code below ###############
# Sum of set elements
total = sum(st)
########### Write your code above ###############

# Print sum of set
print(total)