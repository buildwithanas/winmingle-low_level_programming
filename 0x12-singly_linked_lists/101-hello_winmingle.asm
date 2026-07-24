; 64-bit assembly program to print "Hello, WINMINGLE"
; Using printf function from the C standard library



; Define the data section (for initialized data)
section .data
    
    format: db "Hello, WINMINGLE", 10, 0

    section .text
    extern printf
	global main
main:
	mov esi, msg
	mov edi, fmt
	mov eax, 0
	call printf

	mov eax, 0
	ret
    
