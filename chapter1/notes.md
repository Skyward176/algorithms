# Chapter 1, Recursion

- Release your urge to know how everything works. This doesn't mean to use reductions haphazardly, but intentionally. 
- Even when you could understand the implementation of every subroutine in your algorithm, it's useful not to. 

- Recursion is a type of reduction.

- "If you can solve a simple instance of a problem directly, do so. Otherwise break into simpler instances of the same problem until you can."
- It's like dominos falling. 

- The reason it works is the *Reduction Fairy* or the *Induction Hypothesis*

### Induction Hypothesis

What the induction hypothesis basically states is the process of proof by induction. Something which I hate and one of the reasons I'm not a math major. 

But alas this is a necessary evil so here we are. 

Basically, the induction hypothesis is that if we can:
1. Prove the correctness of the base case (which we refer to as the n=0 step)
2. Prove that if any case is true, then the next one **must** be true. (which we do with numbers like this: if n=k is true, prove that n+1 must be true)

Then we can prove that all cases are always true/correct.

The second step is the one that involves alphabet math (algebra).

I should probably practice this on my actual homework, but for the purposes of this repo it doesn't matter since I'm trying to just isolate the cool stuff (sorry math nerds; code is cool, equations are lame)

### --- End foray into mAtH (scary) (*gasps dramatically*) --- 

- The important rule is that all recursions must have an elementary base case. Otherwise we just have a stack memory eating monster that does nothing useful. 



