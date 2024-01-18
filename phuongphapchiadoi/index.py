print("Ax^3+ Bx^2+cX+d")


def chiadoi():

    # n= int(input("nhap n:"))
    # a= float(input("Nhap a:"))
    # b= float(input("Nhap b:"))
    # c= float(input("Nhap c:"))
    # d= float(input("Nhap d:"))
    # x= float(input("Nhap x:"))
    # y= float(input("Nhap y:"))
  

    n= 10
    a= 2.0
    b=0.0
    c=-5.1
    d=-14.3
    x= 1.2
    y= 2.93
    
    z= (x+y)/2
    
    
    for i in range(0,n):
       
        value1 = a*x**3 + b*x**2 + c*x + d
        value2 = a*z**3 + b*z**2 + c*z+ d
        # print(f"{value1}-----+{value2}")
        

        if (value1 > 0 and value2 > 0) or (value1 < 0 and value2 < 0):
            x=z
            z= (x+y)/2

        if((value1> 0 and  value2<0) or  (value1<0 and value2>0)):
            y=z
            z= (x+y)/2
            

        print(f"{x}             {y}         {z}")
        
        
        
chiadoi()
