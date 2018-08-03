from flask import Flask, render_template
app = Flask(__name__)

@app.route("/")
def hello():
    return render_template("index2.html")

@app.route("/yo")
def yo():
    return render_template("yo2.html")

