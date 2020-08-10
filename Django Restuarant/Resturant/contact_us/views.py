from django.shortcuts import render
from .models import contact


# Create your views here.

def contacts(request):
    name = request.POST.get('name', '')
    email = request.POST.get('email', '')
    cnt = request.POST.get('mob', '')
    message = request.POST.get('message', '')
    x = contact(name=name, email=email, contact=cnt, msg=message)
    x.save()
    return render(request, 'contact_us.html')
