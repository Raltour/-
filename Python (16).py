#自定义函数：检测违禁词
def check_unsafe_word(word):#这里用的word是形式参数
    if 'TMD' in word:
        return "******"
    else:
        return word

comment = "我TMD不想上课"
print(check_unsafe_word(comment))