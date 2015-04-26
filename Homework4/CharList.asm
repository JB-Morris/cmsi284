global main

extern puts

section.text

main:
        mov    rax, arr
        mov    dl, Ox0020
        
list_builder:
        mov byte   [rax], dl
        inc        dl
        inc        rax
        cmp        dl, Ox007E
        je         end
        and        dl, 15
        jnz        arr
        mov byte  [rax], 10
        inc        rax
        jmp        list_builder
end:
        mov byte   [rax], 0
        mov        rdi, arr
        call       puts
        ret
arr:
    resb 