from flask import Flask, render_template, request, make_response
app = Flask(__name__)

@app.route("/")
def hello():
    is_login = False
    if "is_login" in request.cookies and request.cookies['is_login'] == 'yes':
        is_login = True
    return render_template("index3.html", is_login = is_login)

@app.route("/yo")
def yo():
    return render_template("yo2.html")

@app.route("/login", methods=["POST"])
def login():
    user = request.form['username']
    password = request.form['password']
    if user == "a" and password == "a" :
        response = make_response("yes")
        response.set_cookie("is_login", value="yes")
        return response
    else:
        return "No"
