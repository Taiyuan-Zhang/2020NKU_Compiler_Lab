
main.o：     文件格式 elf64-x86-64


Disassembly of section .text:

0000000000000000 <add>:
   0:	55                   	push   %rbp
   1:	48 89 e5             	mov    %rsp,%rbp
   4:	89 7d fc             	mov    %edi,-0x4(%rbp)
   7:	89 75 f8             	mov    %esi,-0x8(%rbp)
   a:	8b 55 fc             	mov    -0x4(%rbp),%edx
   d:	8b 45 f8             	mov    -0x8(%rbp),%eax
  10:	01 d0                	add    %edx,%eax
  12:	5d                   	pop    %rbp
  13:	c3                   	retq   

0000000000000014 <sub>:
  14:	55                   	push   %rbp
  15:	48 89 e5             	mov    %rsp,%rbp
  18:	89 7d fc             	mov    %edi,-0x4(%rbp)
  1b:	89 75 f8             	mov    %esi,-0x8(%rbp)
  1e:	8b 45 fc             	mov    -0x4(%rbp),%eax
  21:	2b 45 f8             	sub    -0x8(%rbp),%eax
  24:	5d                   	pop    %rbp
  25:	c3                   	retq   

0000000000000026 <main>:
  26:	55                   	push   %rbp
  27:	48 89 e5             	mov    %rsp,%rbp
  2a:	48 83 ec 10          	sub    $0x10,%rsp
  2e:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  35:	00 00 
  37:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  3b:	31 c0                	xor    %eax,%eax
  3d:	48 8d 55 f4          	lea    -0xc(%rbp),%rdx
  41:	48 8d 45 f0          	lea    -0x10(%rbp),%rax
  45:	48 89 c6             	mov    %rax,%rsi
  48:	48 8d 3d 00 00 00 00 	lea    0x0(%rip),%rdi        # 4f <main+0x29>
  4f:	b8 00 00 00 00       	mov    $0x0,%eax
  54:	e8 00 00 00 00       	callq  59 <main+0x33>
  59:	8b 55 f4             	mov    -0xc(%rbp),%edx
  5c:	8b 45 f0             	mov    -0x10(%rbp),%eax
  5f:	89 d6                	mov    %edx,%esi
  61:	89 c7                	mov    %eax,%edi
  63:	e8 00 00 00 00       	callq  68 <main+0x42>
  68:	89 c1                	mov    %eax,%ecx
  6a:	8b 55 f4             	mov    -0xc(%rbp),%edx
  6d:	8b 45 f0             	mov    -0x10(%rbp),%eax
  70:	89 c6                	mov    %eax,%esi
  72:	48 8d 3d 00 00 00 00 	lea    0x0(%rip),%rdi        # 79 <main+0x53>
  79:	b8 00 00 00 00       	mov    $0x0,%eax
  7e:	e8 00 00 00 00       	callq  83 <main+0x5d>
  83:	b8 00 00 00 00       	mov    $0x0,%eax
  88:	48 8b 4d f8          	mov    -0x8(%rbp),%rcx
  8c:	64 48 33 0c 25 28 00 	xor    %fs:0x28,%rcx
  93:	00 00 
  95:	74 05                	je     9c <main+0x76>
  97:	e8 00 00 00 00       	callq  9c <main+0x76>
  9c:	c9                   	leaveq 
  9d:	c3                   	retq   
