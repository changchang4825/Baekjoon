import math

def solution(users, emoticons):
    answer = [0, 0]
    
    max_discount = 0
    min_discount = 100
    
    for user in users:
        discount = math.ceil(user[0] / 10) * 10
        if discount > max_discount:
            max_discount = discount
        if discount < min_discount:
            min_discount = discount
        
    combinations = []
    stack = [[]]
    
    while len(stack) > 0:
        simulator = stack.pop()
        if len(simulator) >= len(emoticons):
            combinations.append(simulator)
            continue
        for discount in range(min_discount, max_discount + 10, 10):
            stack.append(simulator + [discount])
            
    for c in combinations:
        new_answer = [0, 0]
        for user in users:
            money = 0
            for i in range(len(c)):
                if user[0] <= c[i]:
                    money += emoticons[i] * (100 - c[i]) / 100    
            if money >= user[1]:
                new_answer[0] += 1
            else:
                new_answer[1] += money
        if new_answer[0] > answer[0] or (new_answer[0] == answer[0] and new_answer[1] > answer[1]):
            answer = new_answer
    
    return answer