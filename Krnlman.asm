;MedOS Kernel extention
;System Manager(krnlman.dll)

call startedKernel
strinf:
	;String used for checking hibernated PC or Shut-Down PC;
	db	"MedOS kernel version R | Is loaded | medload->medoskrnl | Regular Compact Hybrid",0
string:
	; Started Kernel Sign:
	db	"StartedKernel",0
StartedKernel:
	mov es, [string]; Put data into "ES" register
	jmp StartedKernelStringPrint
	push es; Pushed "ES" register
	mov dl, [strinf]; Put data into "DL" Register
	push dl; Pushed "DL" register	
