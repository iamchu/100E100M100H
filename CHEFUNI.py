import math
 
t=int(raw_input())
for k in range(t):
    numbers_string = raw_input()
    numbers_array = numbers_string.split(" ")
    x = int(numbers_array[0])
    y = int(numbers_array[1])
    z = int(numbers_array[2])
    a = int(numbers_array[3])
    b = int(numbers_array[4])
    c = int(numbers_array[5])
 
            # memoization_dict[" ".join(str(x), str(y), str(z))]
            # memoization_dict[" ".join([str(x), str(y), str(z)])]
 
    memoization_dict = {}
    
    def turnInString(x,y,z):
        return " ".join([str(x), str(y), str(z)])
 
    def minCost(x,y,z,a,b,c): 
 
        if turnInString(x,y,z) in memoization_dict:
            return memoization_dict[turnInString(x,y,z)]
 
        if(x==y==z==0):
            return 0
 
        # if two are 0 and the other bigger
        if(x>0 and y==z==0):
            memoization_dict[turnInString(x,y,z)] = minCost(x-1,y,z,a,b,c)+a
            
        if(y>0 and z==x==0):
            memoization_dict[turnInString(x,y,z)] = minCost(x,y-1,z,a,b,c)+a
 
        if(z>0 and x==y==0):
            memoization_dict[turnInString(x,y,z)] = minCost(x,y,z-1,a,b,c)+a
 
        # if one is zero and the other bigger
        if(x>0 and y>0 and z==0):
            memoization_dict[turnInString(x,y,z)] = min(minCost(x-1,y,z,a,b,c)+a, minCost(x,y-1,z,a,b,c)+a, minCost(x-1,y-1,z,a,b,c)+b)

        if(x==0 and y>0 and z>0):
            memoization_dict[turnInString(x,y,z)] = min(minCost(x,y,z-1,a,b,c)+a, minCost(x,y-1,z,a,b,c)+a, minCost(x,y-1,z-1,a,b,c)+b)
        if(x>0 and y==0 and z>0):
            memoization_dict[turnInString(x,y,z)] = min(minCost(x-1,y,z,a,b,c)+a, minCost(x,y,z-1,a,b,c)+a, minCost(x-1,y,z-1,a,b,c)+b)
 
        # if all are bigger than 0
        if(x>0 and y>0 and z>0):
            memoization_dict[turnInString(x,y,z)] = min(minCost(x-1,y,z,a,b,c)+a, minCost(x,y-1,z,a,b,c)+a,  minCost(x,y,z-1,a,b,c)+a, minCost(x-1,y-1,z,a,b,c)+b,  minCost(x,y-1,z-1,a,b,c)+b, minCost(x-1,y,z-1,a,b,c)+b, minCost(x-1,y-1,z-1,a,b,c)+c)
 
        return memoization_dict[turnInString(x,y,z)]
 
    print minCost(x,y,z,a,b,c)