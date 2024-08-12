def display_matrix(m, name):
    if len(m) < 1:
        print("\t***----***")
        print("\t   |NA|")
        return
    
    j = 0
    clen = []
    while j < len(m[0]):
        i = 0
        val = 0
        while i < len(m):
            val = max(val, len(str(m[i][j])))
            i += 1
        clen.append(val)
        j += 1
    
    rlen = sum(clen)
    q = len(name)
    l = rlen + len(m[0]) - 1

    if l < 9+q:
        print("\t****-", end = "")
        i = 0
        while i < l:
            print("-", end = "")
            i += 1
        print("-****")
    else:
        if (l%2 != 0 and q%2 == 0) | (l%2 == 0 and q%2 != 0):
            temp = (9+q)/2
        else:
            temp = (8+q)/2
        
        print("\t*****", end = "")
        i = 0
        while i < (l/2 - temp - 1):
            print("*", end = "")
            i += 1
        print("|", end = "")
        