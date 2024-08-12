def get_random_matrix():
    import random
    m = []
    n = int(input("What's Matrix Order? "))
    i = 0
    while i<n:
        m.append([])
        j = 0
        while j<n:
            m[i].append(random.randint(1, 1000))
            j += 1
        i += 1
    return m

def get_matrix():
    m = []
    n = int(input("What's Matrix Order? "))
    i = 0
    while i<n:
        m.append([])
        j = 0
        while j<n:
            m[i].append(int(input(f"What's Ele-[{i+1}][{j+1}]? ")))
            j += 1
        i += 1
    return m

def print_matrix(m):
    for row in m:
        for item in row:
            print(item, end = " ")
        print()

