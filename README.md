# RaffCrypt | Proof Of Concept

- Encrypted at compiling
- UserMode
- KernelMode

# What can you prefend from happening?

- Having single strings stored in the in-memory binary file can help reverse attempts for much easier.
- If the program was targeted for string scans, you had to modify the strings whenever you were detected.

# Other stuff
- Decrypt the chain on the current location of the stack. Even though in some situations the stack location will be overwritten on return from a function, in especially when the is called from the main function, the decrypted remains on the battery for the life of the battery / program, which leaks it.
- alot of crypters dont even work with usermode & kernelmode.

# About this project

This project was created to create my proof of concept, crypters are still possible to make nor do I say this is a great crypter.
Its just proof of concept and a simple UserMode & KernelMode crypter that supports C++11 to c++19.
Its all pretty basic, what will be seen inside the source.

I just wanted to show that crypting is still a do-able thing, and I miss the fact that people dont crypt there stuff.
They just leave strings open to read for everyone while creating a crypter is peace of cake if you know c++ basics.
this is a crypter purely made to show the concept of crypters and what its able to do, I did add KernelMode support cause I wanted to show that its possible.
Alot of people are saying now adays: "Its hard to create KernelMode crypters", "KernelMode crypters are almost impossible". And I find that total bullshit.
Since C/++ is close code to the OS SubSystem its really simple to create a crypter that supports KernelMode. This is usable for all kinds of matters I am just showing the concept.
I do not claim that crypting will be the feature but it will help to prefend someone from reading into your stuff.

# Why did I add KernelMode?

For example if you are creating a driver, you can code this either in UserMode or KernelMode, Most people now adays choose to create it inside of kernel since thats the best way at the moment. This makes it great for these people to have someething that can protect to be read into. I will state this again, this is just proof of concept its not anything special its a basic encryption and not hard to decrypt.
