from django.contrib.auth.models import User
from django.shortcuts import render


# Create your views here.

def login(request):
    if request.method == "POST":
        username = request.POST.get('username')
        email = request.POST.get('email')
        pas = request.POST.get('Password')
        x = User.objects.create_user(username=username, email=email, password=pas)
        x.save()
        print("USER CREATED")
        print(username)
    else:
        user = request.POST.get('username')
        pas = request.POST.get('Password')
        if user is None:
            print("NONE")
        else:
            print(user)
    return render(request, 'loginp.html')
