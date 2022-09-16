import sys
import fileinput
words_list = []
ascii_list = []
for line in fileinput.input(files ='wordlist.txt'):
    words_list.append(line.replace("\n", "").lower())
    
    i = 0
    k = 0
    x = 0
    for d in words_list:
        for s in words_list[i]:
            x += float((ord(s)))/(float(1000)**float(k))
            k+= 1
            ascii_list.append(x)
            k = 0
            i += 1
            x = 0
            def merge_sort(inp, inpword):
                size = len(inp)
                if size > 1:
                    middle = size // 2
                    left_arr = inp[:middle]
                    right_arr = inp[middle:]
                    leftword_arr = inpword[:middle]
                    rightword_arr = inpword[middle:]
                    
                    merge_sort(left_arr, leftword_arr)
                    merge_sort(right_arr, rightword_arr)
                    
                    p = 0
                    q = 0
                    r = 0

                    left_size = len(left_arr)
                    right_size = len(right_arr)
                    while p < left_size and q < right_size:
                        if left_arr[p] < right_arr[q]:
                            inp[r] = left_arr[p]
                            inpword[r] = leftword_arr[p]
                            p += 1
                        else:
                            inp[r] = right_arr[q]
                            inpword[r] = rightword_arr[q]
                            q += 1
                            
                            r += 1
                            
                            
                    while p < left_size:
                        inp[r] = left_arr[p]
                        inpword[r] = leftword_arr[p]
                        p += 1
                        r += 1
                    
                    while q < right_size:
                        inp[r]=right_arr[q]
                        inpword[r] = rightword_arr[q]
                        q += 1
                        r += 1
merge_sort(words_list, ascii_list)
print(ascii_list)
print(words_list)
