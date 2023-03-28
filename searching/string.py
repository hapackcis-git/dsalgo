import tkinter as tk

def to_lowercase(*args):
    var.set(var.get().lower())

def to_uppercase(*args):
    cap.set(var.get().lower())
root = tk.Tk()
root.geometry('500x500')

var = tk.StringVar(root)
cap=tk.StringVar(root)
e = tk.Entry(root, textvariable=var)
e.pack()
label=tk.Label(text = "Output", bg = "Yellow")
label.place(relx = .2, rely = .7, relwidth = .3, relheight = .2)
label
root.mainloop()