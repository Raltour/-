#函数可以指定默认参数
#用户不输入邮箱时指定为默认值
def create_game_character(account,username="游客",password="123456",email=""):
    print(username,account,password,email)

create_game_character(password="Aa12341234",account="杭州第一帅")
