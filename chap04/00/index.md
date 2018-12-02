## 阅读程序写出结果

    if(x>2) {
        if(y>2) {
            int z = x + y; 
            cout << "z=" << z << endl;
        }
    }else{
        cout << "x=" << x << endl;
    }

1. x=3, y=2 => "" 
2. x=2, y=3 => x=2
3. x=3, y=4 => z=7
4. x=2, y=2 => x=2
5. x=3, y=3 => z=6


    if(x>2)
        if(y>2){
            int z = x + y;
            cout << "z=" << z << endl;
        }else{
            cout << "x=" << x << endl;
        }
        
1. x=3, y=2 => x=3
2. x=2, y=3 => ""
3. x=3, y=4 => z=7
4. x=2, y=2 => ""
5. x=3, y=3 => z=6

