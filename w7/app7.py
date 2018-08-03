from flask import Flask, render_template, request, make_response, redirect, session
app = Flask(__name__)
app.secret_key = "123"

@app.route("/")
def hello():
    username = ""
    if "username" in session:
        username = session['username']
    return render_template("index4.html", username = username)

@app.route("/yo")
def yo():
    return render_template("yo2.html")

@app.route("/login", methods=["POST"])
def login():
    user = request.form['username']
    password = request.form['password']
    if user == "a" and password == "a" :
        session['username'] = 'Sam'
    return redirect("/")
