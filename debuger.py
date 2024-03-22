#!/usr/bin/python3
from pwn import *
import sys
context.log_level = 'DEBUG'
context(os='linux', arch='amd64')
e = context.binary = ELF("./Chapter2/practice.c")
p = e.debug(gdbscript="source /home/nick/global/halfdisp.py"
+"\nbreak *main"
+"\nc"
)
p.interactive()