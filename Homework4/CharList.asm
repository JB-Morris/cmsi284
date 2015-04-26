global main

extern puts


section .text


main:
        mov    rbx, arr
        mov    dl, 32
        
list_builder:
        mov byte   [rbx], dl
        inc        dl
        inc        rbx

        cmp        dl, 127
        je         end
	mov	   al, dl
	and	   al, 15
        jnz        list_builder
        mov byte  [ebx], 10
        inc        rbx
        jmp        list_builder
end:
        mov byte   [rbx], 0
        mov        rdi, arr
        call       puts
        ret

section .bss

arr:
    resb 101
