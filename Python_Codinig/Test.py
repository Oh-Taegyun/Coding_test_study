# python
import time
start = time.time()

# 작성할 내용 ------------------------------

def print_reverse(s):
    print(s[::-1])

print_reverse("string")

# -----------------------------------------

end = time.time()

print(f"{end - start:.5f} sec")