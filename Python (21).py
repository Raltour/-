#位置传参
#创建游戏角色
def create_game_character(username,account,password):
    print()

create_game_character("我只会送人头","杭州第一帅","Aa12341234")
#位置传参：严格按照位置顺序
create_game_character(password="Aa12341234",username="我只会送人头",account="杭州第一帅")
#关键词传参：不用管位置