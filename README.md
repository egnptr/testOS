run docker: docker run --rm -it -v $(pwd):/root/env os-buildenv
run makefile: make build-x86_64
run qemu: qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso
