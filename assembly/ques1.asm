.data 
	myName: .asciiz "Daksh Gupta \n"
	myDepartment: .asciiz "Computer Science \n"
	mySID: .word 20103026
	
.text

	li $v0, 4
	la $a0, myName	
	syscall	
	
	li $v0, 4
	la $a0, myDepartment	
	syscall
	
	li $v0, 1
	lw $a0, mySID	
	syscall
	
