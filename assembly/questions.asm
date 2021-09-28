.data
    	first: .asciiz "Enter the first number: "
	second: .asciiz "Enter the second number: " 
	larger: .asciiz "\nThe larger number is: "
    	sum: .asciiz "\nThe sum of two numbers is: "
    	difference: .asciiz "\nThe difference of the two numbers is: "
    	product: .asciiz "\nThe product of the numbers is: "
    	divide: .asciiz "\nThe quotient of the numbers is: "

.text 
    main: 
        li $v0, 4
        la $a0, first
        syscall 
        #input first number
        li $v0, 5
        syscall 
        move $t0, $v0 

        li $v0, 4
        la $a0, second
        syscall 
        #input second number
        li $v0, 5
        syscall 
        move $t1, $v0 


        li $v0, 4
        la $a0, sum
        syscall
        #print the sum
        add $a0, $t0, $t1 
        li $v0, 1
        syscall 

        li $v0, 4
        la $a0, difference
        syscall
        #print the difference
        sub $a0, $t0, $t1 
        li $v0, 1
        syscall 

        li $v0, 4
        la $a0, product
        syscall
        #print the product
        mul $a0, $t0, $t1 
        li $v0, 1
        syscall 

        li $v0, 4
        la $a0, divide
        syscall
        #print the quotient
        div $a0, $t0, $t1 
        li $v0, 1
        syscall 
        
        #find the larger number 
        slt $t3, $t0, $t1 
        beq $t3, $zero, great  #t3 set to zero if t0>t1
        move $t0, $t1 #else move t1 to t0
        
        great:   #print t0
        		li $v0, 4 
        		la $a0, larger 
        		syscall 
        		
        		li $v0, 1
        		move $a0, $t0
        		syscall
        		

