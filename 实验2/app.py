from flask import Flask
app=Flask(__name__) #创建Flask应用实例
#定义基本路由
@app.route('/')
def hello_world():
    return 'Hello World!'
#带参数的路由
@app.route('/user/<name>')
def user(name):
    return 'Hello, {}'.format(name)