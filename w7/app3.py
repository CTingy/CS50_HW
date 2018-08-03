from flask import Flask, render_template, request
app = Flask(__name__)

@app.route("/")
def hello():
    return render_template("index3.html")

@app.route("/yo")
def yo():
    return render_template("yo2.html")

@app.route("/login", methods=["POST"])
def login():
    user = request.form['username']
    password = request.form['password']
    print(user, password)
    return "Hi~"
