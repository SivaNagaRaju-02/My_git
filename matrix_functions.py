def matrix_addition(m1, m2):
    if len(m1) == 0 or len(m2) != len(m1):
        return False
    if len(m1[0]) != len(m2[0]):
        return False
    m = []
    i = 0
    while i<len(m1):
        m.append([])
        j = 0
        while j<len(m1[0]):
            m[i].append(m1[i][j] + m2[i][j])
            j += 1
        i += 1
    return m