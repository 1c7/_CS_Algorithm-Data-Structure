

a = [31, 1, 6, 22, 5]
print()
print(a)


def s_sort(a):
  arr_len = len(a)
  
  for i in range(0, arr_len):  
    for j in range(i+1, arr_len):
      print( str(i) + "------" + str(j) )
      if a[j] < a[i]:
        a[j], a[i] = a[i], a[j]

  return a


b = s_sort(a)

print('----Select Sort done----')
print(b)
print()