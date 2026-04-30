def solution(number, k):
    
    st = [] # 담을 스택
    for n in number:
        while k > 0 and st and st[-1] < n:
            st.pop()
            k -= 1
        
        st.append(n)
    
    if k > 0:
        st = st[:-k]
    
    return "".join(st)
            